#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 unionType VAR4;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 VAR4.VAR5 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR6;
 {
 TwoIntsClass VAR7[100];
 {
 size_t VAR8;
 for (VAR8 = 0; VAR8 < 100; VAR8++)
 {
 VAR7[VAR8].VAR9 = 0;
 VAR7[VAR8].VAR10 = 0;
 }
 }
 memcpy(VAR3, VAR7, 100*sizeof(VAR2));
 FUN2(VAR3[0].VAR9);
 delete [] VAR3;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
