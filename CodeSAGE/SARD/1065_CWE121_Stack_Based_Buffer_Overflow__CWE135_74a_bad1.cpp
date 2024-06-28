#ifndef VAR1
void FUN1(VAR2<int, void *> VAR3);
void FUN2()
{
 void * VAR4;
 VAR2<int, void *> VAR3;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Set data to point to a wide string */
 VAR4 = (void *)VAR5;
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
