#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 {
 int64_t VAR4[100] = {0};
 memcpy(VAR3, VAR4, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 delete [] VAR3;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = new VAR2[100];
 FUN1(VAR3);
}
void FUN4()
{
 FUN3();
}
#endif
