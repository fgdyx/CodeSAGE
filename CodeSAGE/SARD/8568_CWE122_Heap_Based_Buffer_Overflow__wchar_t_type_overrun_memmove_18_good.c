#ifndef VAR1
static void FUN1()
{
 goto VAR2;
VAR2:
 {
 VAR3 * VAR4 = (VAR3 *)malloc(sizeof(VAR3));
 VAR4->VAR5 = (void *)VAR6;
 FUN2((wchar_t *)VAR4->VAR5);
 memmove(VAR4->VAR7, VAR6, sizeof(VAR4->VAR7));
 VAR4->VAR7[(sizeof(VAR4->VAR7)/sizeof(wchar_t))-1] = VAR8'';
 FUN2((wchar_t *)VAR4->VAR7);
 FUN2((wchar_t *)VAR4->VAR5);
 }
}
void FUN3()
{
 FUN1();
}
#endif
