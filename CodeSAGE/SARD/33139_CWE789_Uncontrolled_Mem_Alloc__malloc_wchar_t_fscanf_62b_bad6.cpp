#ifndef VAR1
void FUN1(VAR2 &VAR3)
{
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR3);
}
#endif
