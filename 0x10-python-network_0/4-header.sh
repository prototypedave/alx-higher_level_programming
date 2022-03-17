#!/bin/bash
#takes an URL as an argument,sends a GET request and displays the response of the body 
curl -sX GET -H "X-School-User-Id: 98" "$1"
