#!/bin/bash
# Send a GET request to a passed URL with a header variable.
curl -sH "X-HolbertonSchool-User-Id: 98" "${1}"
