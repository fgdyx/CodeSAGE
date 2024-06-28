#ifndef VAR1
void FUN1(badStruct VAR2);
static void FUN2()
{
 badStruct VAR2;
 linkedList VAR3 = { &VAR3, &VAR3 };
 VAR2.VAR4.VAR5 = VAR3.VAR5;
 VAR2.VAR4.VAR6 = VAR3.VAR6;
 VAR3.VAR5 = &VAR2.VAR4;
 VAR3.VAR6 = &VAR2.VAR4;
 ;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
