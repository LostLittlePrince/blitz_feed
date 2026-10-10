# blitz_feed
A high-performance C++ TCP client-server engine for simulating multi-threaded lottery scratcher markets at scale.\
**blitz_feed** was born out of profound morning existentialism at a local donut shop. Staring at the lottery counter, a sudden question emerged:\
\
"Is it statistically optimal to buy a scratcher right now, or should I just finish my donut?"\
\
To answer this, I did the only logical thing by building a non-blocking, lightning-fast engine capable of "scratching" millions of tickets at once to rigorously study their expected value. The goal of **blitz_feed** is to model a lottery scratcher in the context of a real world system to make the invisible math of expected value more tangible. Real-world systems are rarely static; they are deeply complicated webs where odds are constantly shifting within a finite pool of tickets.

## Behind the Name

**blitz_feed** takes its name from the traditional German root word **blitz**, meaning **lightning**. The project draws architectural inspiration from the chaotic, fast-paced energy of the classic card game **Dutch Blitz**. In **Dutch Blitz**, players engage in dynamic gameplay, building their piles asynchronously without waiting for turns. Modeled after this dynamic gameplay, **blitz_feed** is engineered with non-blocking concurrency.
