#!/usr/bin/node
let a = process.argv[2];
let b = process.argv[3];
function add(a, b) {
  return a + b;
}
if (isNaN(a) && isNaN(b)) {
  console.log("NaN");
} else {
  a = parseInt(a);
  b = parseInt(b);
  console.log(add(a, b));
}

