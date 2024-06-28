#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 unionType VAR4;
 VAR3 = NULL;
 TwoIntsClass VAR5;
 VAR3 = &VAR5;
 VAR3->VAR6 = 0;
 VAR3->VAR7 = 0;
 FUN2(VAR3->VAR6);
 FUN2(VAR3->VAR7);
 VAR4.VAR8 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR9;
 ;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 unionType VAR4;
 VAR3 = NULL;
 VAR3 = new VAR2;
 VAR3->VAR6 = 0;
 VAR3->VAR7 = 0;
 FUN2(VAR3->VAR6);
 FUN2(VAR3->VAR7);
 VAR4.VAR8 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR9;
 delete VAR3;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
