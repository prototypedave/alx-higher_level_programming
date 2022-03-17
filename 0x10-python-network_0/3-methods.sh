#!/bin/bash
#displays all methods the HTTPS will allow
curl -sI "$1" | grep "Allow:" | sed -ne 's/^Allow: //p'
