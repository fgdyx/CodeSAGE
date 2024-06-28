#ifndef VAR1
void FUN1(badStruct VAR2);
static void FUN2()
{
 badStruct VAR2;
 void (*VAR3) (VAR4) = VAR5;
 linkedList VAR6 = { &VAR6, &VAR6 };
 VAR2.VAR7.VAR8 = VAR6.VAR8;
 VAR2.VAR7.VAR9 = VAR6.VAR9;
 VAR6.VAR8 = &VAR2.VAR7;
 VAR6.VAR9 = &VAR2.VAR7;
 ;
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
