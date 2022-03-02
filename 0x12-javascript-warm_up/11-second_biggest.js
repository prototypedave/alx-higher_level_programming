#!/usr/bin/node
let secondBig = 0;
const args = process.argv.slice(2);
if (args.length > 1) {
  args.sort();
  secondBig = args[args.length - 2];
}
console.log(secondBig);
