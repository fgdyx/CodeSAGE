#ifndef VAR1
void FUN1(short &VAR2)
{
 /* FLAW: Use a value input from the console using fscanf() */
 fscanf (stdin, "", &VAR2);
}
#endif
