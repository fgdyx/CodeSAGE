#ifndef VAR1
void FUN1(size_t VAR2);
void FUN2()
{
 size_t VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 FUN1(VAR2);
}
#endif
