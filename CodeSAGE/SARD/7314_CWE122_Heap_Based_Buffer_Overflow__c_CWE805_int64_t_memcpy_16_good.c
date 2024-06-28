#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 while(1)
 {
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 break;
 }
 {
 int64_t VAR4[100] = {0};
 memcpy(VAR3, VAR4, 100*sizeof(VAR2));
 FUN2(VAR3[0]);
 free(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
