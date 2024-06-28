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
 int64_t VAR7[100] = {0};
 memmove(VAR3, VAR7, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 delete [] VAR3;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
