# d20

A re-implempentation of [@opensourcedoc](https://github.com/opensourcedoc)'s [d20](https://github.com/opensourcedoc/d20-c) follwing [@skeeto](https://github.com/skeeto)'s [minimalist C library](https://nullprogram.com/blog/2018/06/10/) principles.

__TODO__: Implement FATE dice

## Dependencies

__TODO__: Remove as many of these as possible

- <stdint.h>
- <stdlib.h>
- <time.h>
- <math.h>
- A C99 or C11 aware compiler

## Acknowledgements

Uses Xoshiro256** by David Blackman and Sebastiano Vigna

## Compilation

To compile the full example app, e.g.:

```terminal
gcc main.c d20/d20.c -I. -o d20.exe
```

The code should compile as C++ without modificaton, e.g.

```terminal
g++ main.c d20/d20.c -I. -o d20.exe
```

Or simply...

```terminal
make
```

To include the API in your own application, simply link against d20.c and include d20.h

## Usage

### Command Line

### API

#### ROLL_FROM_CHAR_ARRAY_PARSE_FAILURE_NO_NUMBER_DICE

#### ROLL_FROM_CHAR_ARRAY_PARSE_FAILURE_NO_NUMBER_OF_SIDES

#### int roll_from_char_array(const char *ca)

#### int roll(int dice, int sides, int modifer);

## License

This software is "licensed" with the Unlicense. As such, this is free and unencumbered software released into the public domain.