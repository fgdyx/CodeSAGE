#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 size_t VAR4;
 VAR4 = 0;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR4);
 FUN1(&VAR4);
}
#endif
