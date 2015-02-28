changecom(<!--,-->) changequote(!@,@!)
define(!@nota@!,!@!@<span class="nota" title="$2">$1</span>@!@!)dnl

define(!@aulaimg@!,!@!@<img id="aulaimg" src="img/$1"></img>@!@!)dnl
define(!@rimg@!,!@!@<img class="rimg" src="img/$1" style="height:$2px"></img>@!@!)dnl
define(!@limg@!,!@!@<img class="limg" src="img/$1" style="height:$2px"></img>@!@!)dnl
define(!@orimg@!,!@!@<img class="rimg" src="$1" style="height:$2px"></img>@!@!)dnl
define(!@olimg@!,!@!@<img class="limg" src="$1" style="height:$2px"></img>@!@!)dnl
define(!@urip@!,!@!@[$1](https://www.urionlinejudge.com.br/judge/pt/problems/view/$2)@!@!)dnl

define(!@comp@!,!@
$1
----------------
<div class="!@comp@!">
```
undivert(aulas/códigos/exemplos/$2)
```
<pre class="pseudo box">undivert(aulas/códigos/exemplos/$2.txt)</pre>
</div>@!)