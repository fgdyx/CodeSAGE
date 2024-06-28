#ifndef VAR1
VAR2 FUN1(int64_t VAR3)
{
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR3);
 return VAR3;
}
#endif
