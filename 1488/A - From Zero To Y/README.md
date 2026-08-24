<h2><a href="https://codeforces.com/contest/1488/problem/A" target="_blank" rel="noopener noreferrer">1488A — From Zero To Y</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | Kotlin 2.2 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1488A](https://codeforces.com/contest/1488/problem/A) |

## Topics
`*special` `math`

---

## Problem Statement

<div class="header"><div class="title">A. From Zero To Y</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two positive (greater than zero) integers $$$x$$$ and $$$y$$$. There is a variable $$$k$$$ initially set to $$$0$$$.</p><p>You can perform the following two types of operations: </p><ul> <li> add $$$1$$$ to $$$k$$$ (i. e. assign $$$k := k + 1$$$); </li><li> add $$$x \cdot 10^{p}$$$ to $$$k$$$ for some non-negative $$$p$$$ (i. e. assign $$$k := k + x \cdot 10^{p}$$$ for some $$$p \ge 0$$$). </li></ul><p>Find the minimum number of operations described above to set the value of $$$k$$$ to $$$y$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 2 \cdot 10^4$$$) — the number of test cases.</p><p>Each test case consists of one line containing two integer $$$x$$$ and $$$y$$$ ($$$1 \le x, y \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one integer — the minimum number of operations to set the value of $$$k$$$ to $$$y$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009380086038826418" id="id00558384782454374" class="input-output-copier">Copy</div></div><pre id="id009380086038826418">3
2 7
3 42
25 1337
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001403237178986274" id="id0049640885400052137" class="input-output-copier">Copy</div></div><pre id="id001403237178986274">4
5
20
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case you can use the following sequence of operations: </p><ol> <li> add $$$1$$$; </li><li> add $$$2 \cdot 10^0 = 2$$$; </li><li> add $$$2 \cdot 10^0 = 2$$$; </li><li> add $$$2 \cdot 10^0 = 2$$$. </li></ol> $$$1 + 2 + 2 + 2 = 7$$$.<p>In the second test case you can use the following sequence of operations: </p><ol> <li> add $$$3 \cdot 10^1 = 30$$$; </li><li> add $$$3 \cdot 10^0 = 3$$$; </li><li> add $$$3 \cdot 10^0 = 3$$$; </li><li> add $$$3 \cdot 10^0 = 3$$$; </li><li> add $$$3 \cdot 10^0 = 3$$$. </li></ol> $$$30 + 3 + 3 + 3 + 3 = 42$$$.</div>