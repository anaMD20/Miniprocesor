# Miniprocesor

Reading and Decoding inst: The program reads an unsigned integer value (inst) and decodes each bit of this value, storing the result in an array v[]. This process converts the value of inst to a binary form, where each element of the array represents a bit of inst, with v[0] being the most significant bit.

Decode N: The first 3 bits of inst (decoded into v[0] to v[2]) are used to calculate an N value, which is incremented by 1 to avoid the zero value.

Generate Sequence of Operations: The following bits (starting at v[3]) are used to generate a sequence of math operations (+, -, *, /), determined by consecutive bit pairs. This sequence is displayed on the screen.

Decode Dimension: The last bits are used to calculate a Dim value, which is also incremented by 1. This value is displayed at the end of the program.

Essentially, the first program decodes an unsigned integer to determine a sequence of math operations and displays a Dim value calculated from the bits at the end of the number.

The Second Program
Read and Decode inst: Similar to the first program, it reads and decodes inst in a binary form.

Decode N and Dim: Calculates N and Dim using the same methodology as the first program.

Calculation of Additional Reads: Calculates the number of additional reads (read) required based on the N and Dim values. These readings are needed to process math operations.

Read and Decode Additional Operations: Reads and decodes a set of integers (oper), each representing a sequence of operations and/or values ​​for calculations. The decoding is done in a binary array[] and the values ​​are extracted and stored in operands[].

Calculation and Display of Final Result: Using the sequence of mathematical operations decoded from inst and the values ​​from operands[], the program calculates a final result by sequentially applying the operations. The result is then displayed.
