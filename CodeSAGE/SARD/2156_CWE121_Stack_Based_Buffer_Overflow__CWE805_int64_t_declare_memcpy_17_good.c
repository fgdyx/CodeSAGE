#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR3 * VAR4;
 int64_t VAR5[50];
 int64_t VAR6[100];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR4 = VAR6;
 }
 {
 int64_t VAR7[100] = {0};
 memcpy(VAR4, VAR7, 100*sizeof(VAR3));
 FUN2(VAR4[0]);
 }
}
void FUN3()
{
 FUN1();
}
#endif
