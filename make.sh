#!/bin/bash
m4 aulas/$1.md | pandoc --smart -f markdown_strict+backtick_code_blocks+inline_code_attributes+markdown_in_html_blocks -t html | m4 index.template > $1.html