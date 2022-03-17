#!/bin/bash
#sends JSON POST request
curl -sX POST -H "Content_Type: application/json" -d @"$2" "$1"
