#ifndef VAR1
VAR2 FUN1(size_t VAR3)
{
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR3);
 return VAR3;
}
#endif
