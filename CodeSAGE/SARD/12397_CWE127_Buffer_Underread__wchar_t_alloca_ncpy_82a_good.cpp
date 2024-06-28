#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2 = VAR3;
 VAR5* VAR6 = new VAR7;
 VAR6->FUN3(VAR2);
 delete VAR6;
}
void FUN4()
{
 FUN1();
}
#endif
