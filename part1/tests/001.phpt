--TEST--
part1 test
--SKIPIF--
<?php if (!extension_loaded('part1')) die('part1 not laoded'); ?>
--FILE--
<?php 
part1_test();
?>
--EXPECT--
test from part1
