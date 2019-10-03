if (COMMAND include_guard)
  include_guard(GLOBAL)
else()
  if (__SIGNAL_CHECK_MODULE__)
    return()
  endif()
  set(__SIGNAL_CHECK_MODULE_ ON)
endif()

function (signal_check_lint flag)
  set(forbid "-Werror=")
  set(allow "-Wno-")
  set(deny "-W")
  string(TOUPPER "${flag}" name)
  set(forbid-output lint-forbid-${flag})
  set(allow-output lint-allow-${flag})
  set(deny-output lint-deny-${flag})

  string(MAKE_C_IDENTIFIER "SIGNAL_LINT_${name}" var)

  check_c_compiler_flag(${deny}${flag} ${var})
  set(${forbid-output} $<$<BOOL:${${var}}>:${forbid}${flag}> PARENT_SCOPE)
  set(${allow-output} $<$<BOOL:${${var}}>:${allow}${flag}> PARENT_SCOPE)
  set(${deny-output} $<$<BOOL:${${var}}>:${deny}${flag}> PARENT_SCOPE)
endfunction()
