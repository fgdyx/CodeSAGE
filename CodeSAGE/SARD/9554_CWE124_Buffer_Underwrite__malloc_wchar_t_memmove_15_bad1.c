#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 switch(6)
 {
 case 6:
 {
 wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR2 = VAR3 - 8;
 }
 break;
 default:
 FUN2("");
 break;
 }
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR4'', 100-1);
 VAR5[100-1] = VAR4'';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 memmove(VAR2, VAR5, 100*sizeof(wchar_t));
 VAR2[100-1] = VAR4'';
 FUN3(VAR2);
 }
}
#endif
