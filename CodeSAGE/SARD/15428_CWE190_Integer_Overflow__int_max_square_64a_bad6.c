#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 int VAR3;
 VAR3 = 0;
 /* POTENTIAL FLAW: Use the maximum value for this type */
 VAR3 = VAR4;
 FUN1(&VAR3);
}
#endif
