#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 int64_t VAR4[50];
 int64_t VAR5[100];
 VAR3 = VAR5;
 {
 int64_t VAR6[100] = {0};
 memcpy(VAR3, VAR6, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 }
}
void FUN3()
{
 FUN1();
}
#endif
