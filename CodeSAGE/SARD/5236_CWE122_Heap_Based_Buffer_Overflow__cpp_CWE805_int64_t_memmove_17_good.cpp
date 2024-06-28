#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR3 * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = new VAR3[100];
 }
 {
 int64_t VAR5[100] = {0};
 memmove(VAR4, VAR5, 100*sizeof(VAR3));
 FUN2(VAR4[0]);
 delete [] VAR4;
 }
}
void FUN3()
{
 FUN1();
}
#endif
