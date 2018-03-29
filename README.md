Edited by Shariar Kabir


Has proper set up for the file, everything follows a good style

Indent, removeLeadingSpaces, and unindent, as well as CountChar works.

Everything was easily readable, however, it was missing comments on how it worked.

Changes:

Changed unindent to take in a string, instead of taking in a cin input. This caused issues as when using it in the main function, it would take in the line currently working in, then take in a new line again

Removed the counter for open '{' and close '}'. This was unnecessary as he already had a counter for the number of tabs.

Removed the extra "\n", so it wouldn't have another space between labs.

Changed the position of when checking for '}' so it would provide the correct tabs. Moved this after the for loop.
