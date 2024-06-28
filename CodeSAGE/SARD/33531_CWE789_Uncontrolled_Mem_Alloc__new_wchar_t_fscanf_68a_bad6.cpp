#ifndef VAR1
void FUN1();
void FUN2()
{
 size_t VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 VAR3 = VAR2;
 FUN1();
}
#endif
