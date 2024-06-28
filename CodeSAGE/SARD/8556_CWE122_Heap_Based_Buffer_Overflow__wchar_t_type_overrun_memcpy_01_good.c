#ifndef VAR1
static void FUN1()
{
 {
 VAR2 * VAR3 = (VAR2 *)malloc(sizeof(VAR2));
 VAR3->VAR4 = (void *)VAR5;
 FUN2((wchar_t *)VAR3->VAR4);
 memcpy(VAR3->VAR6, VAR5, sizeof(VAR3->VAR6));
 VAR3->VAR6[(sizeof(VAR3->VAR6)/sizeof(wchar_t))-1] = VAR7'';
 FUN2((wchar_t *)VAR3->VAR6);
 FUN2((wchar_t *)VAR3->VAR4);
 free(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
