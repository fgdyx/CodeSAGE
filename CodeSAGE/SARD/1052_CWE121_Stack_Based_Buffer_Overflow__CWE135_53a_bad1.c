#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 void * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Set data to point to a wide string */
 VAR2 = (void *)VAR3;
 FUN1(VAR2);
}
#endif
