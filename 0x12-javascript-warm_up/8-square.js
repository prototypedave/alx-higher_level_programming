#!/usr/bin/node
let arg = process.argv[2];
if (isNaN(arg)) {
  console.log("Missing size");
} else {
  for (i = 0; i < arg; i++) {
  console.log("X".repeat(arg));
  }
}
