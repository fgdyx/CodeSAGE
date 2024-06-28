#ifndef VAR1
void FUN1(size_t VAR2[]);
void FUN2()
{
 size_t VAR3;
 size_t VAR2[5];
 VAR3 = 0;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR3);
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
