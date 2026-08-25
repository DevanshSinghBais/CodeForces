<h2><a href="https://codeforces.com/contest/1198/problem/B" target="_blank" rel="noopener noreferrer">1198B — Welfare State</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1198B](https://codeforces.com/contest/1198/problem/B) |

## Topics
`binary search` `brute force` `data structures` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Welfare State</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There is a country with $$$n$$$ citizens. The $$$i$$$-th of them initially has $$$a_{i}$$$ money. The government strictly controls the wealth of its citizens. Whenever a citizen makes a purchase or earns some money, they must send a receipt to the social services mentioning the amount of money they currently have.</p><p>Sometimes the government makes payouts to the poor: all citizens who have strictly less money than $$$x$$$ are paid accordingly so that after the payout they have exactly $$$x$$$ money. In this case the citizens don't send a receipt.</p><p>You know the initial wealth of every citizen and the log of all events: receipts and payouts. Restore the amount of money each citizen has after all events.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^{5}$$$) — the numer of citizens.</p><p>The next line contains $$$n$$$ integers $$$a_1$$$, $$$a_2$$$, ..., $$$a_n$$$ ($$$0 \le a_{i} \le 10^{9}$$$) — the initial balances of citizens.</p><p>The next line contains a single integer $$$q$$$ ($$$1 \le q \le 2 \cdot 10^{5}$$$) — the number of events.</p><p>Each of the next $$$q$$$ lines contains a single event. The events are given in chronological order.</p><p>Each event is described as either <span class="tex-font-style-tt">1 p x</span> ($$$1 \le p \le n$$$, $$$0 \le x \le 10^{9}$$$), or <span class="tex-font-style-tt">2 x</span> ($$$0 \le x \le 10^{9}$$$). In the first case we have a receipt that the balance of the $$$p$$$-th person becomes equal to $$$x$$$. In the second case we have a payoff with parameter $$$x$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$n$$$ integers — the balances of all citizens after all events.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006757958046405423" id="id008399295392534598" class="input-output-copier">Copy</div></div><pre id="id006757958046405423">4
1 2 3 4
3
2 3
1 2 2
2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005082831225775224" id="id000003444732579086507" class="input-output-copier">Copy</div></div><pre id="id005082831225775224">3 2 3 4 
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006240467633879206" id="id002245384192145793" class="input-output-copier">Copy</div></div><pre id="id006240467633879206">5
3 50 2 1 10
3
1 2 0
2 8
1 3 20
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004284721479132262" id="id009828123218226925" class="input-output-copier">Copy</div></div><pre id="id004284721479132262">8 8 20 8 10 
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example the balances change as follows: <span class="tex-font-style-tt">1 2 3 4</span> $$$\rightarrow$$$ <span class="tex-font-style-tt">3 3 3 4</span> $$$\rightarrow$$$ <span class="tex-font-style-tt">3 2 3 4</span> $$$\rightarrow$$$ <span class="tex-font-style-tt">3 2 3 4</span></p><p>In the second example the balances change as follows: <span class="tex-font-style-tt">3 50 2 1 10</span> $$$\rightarrow$$$ <span class="tex-font-style-tt">3 0 2 1 10</span> $$$\rightarrow$$$ <span class="tex-font-style-tt">8 8 8 8 10</span> $$$\rightarrow$$$ <span class="tex-font-style-tt">8 8 20 8 10</span></p></div>