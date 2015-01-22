#!/bin/bash
m4 $1.md | pandoc --smart \
			   -f markdown_strict+backtick_code_blocks+inline_code_attributes \
			   -t html | m4 index.template > $1.html