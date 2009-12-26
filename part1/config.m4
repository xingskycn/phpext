PHP_ARG_ENABLE(part1, whether to enable part1,
[  --enable-part1           Enable part1 support])

if test "$PHP_PART1" != "no"; then

  PHP_NEW_EXTENSION(part1, part1.c, $ext_shared)

fi
