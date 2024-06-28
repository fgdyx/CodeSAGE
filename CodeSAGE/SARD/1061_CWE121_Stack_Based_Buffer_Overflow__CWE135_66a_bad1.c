#ifndef VAR1
void FUN1(void * VAR2[]);
void FUN2()
{
 void * VAR3;
 void * VAR2[5];
 VAR3 = NULL;
 /* POTENTIAL FLAW: Set data to point to a wide string */
 VAR3 = (void *)VAR4;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
