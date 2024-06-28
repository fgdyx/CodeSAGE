#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 badStruct VAR3;
 linkedList VAR4 = { &VAR4, &VAR4 };
 VAR3.VAR5.VAR6 = VAR4.VAR6;
 VAR3.VAR5.VAR7 = VAR4.VAR7;
 VAR4.VAR6 = &VAR3.VAR5;
 VAR4.VAR7 = &VAR3.VAR5;
 ;
 FUN1(&VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
