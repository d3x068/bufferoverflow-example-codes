# bufferoverflow-example-codes
a bunch of c codes that vulnerable to bufferoverflow. source : chatgpt

## C functions and methods that vulnerable to bufferoverflow
1. gets()
reads a line from standard input into a buffer without checking its size.

2. strcpy()
copies a string from one location to another without checking its size.

3. strcat()
concat one string onto another without checking its size.

4. sprintf()
formats and stores a string a buffer without checking its size.

5. scanf()
it can lead to buffer overflows if you do not specify a width limit for string inputs.

6. memcpy()
copies data from one memory location to another without checking if the destination is large enough.


## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

Please make sure to update tests as appropriate.
