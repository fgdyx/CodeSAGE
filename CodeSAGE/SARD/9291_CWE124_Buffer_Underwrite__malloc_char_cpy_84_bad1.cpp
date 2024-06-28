#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 {
 char * VAR7 = (char *)malloc(100*sizeof(char));
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR6 = VAR7 - 8;
 }
}
VAR4::~FUN1()
{
 {
 char VAR8[100];
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 /* POTENTIAL FLAW: Possibly copying data to memory before the destination buffer */
 strcpy(VAR6, VAR8);
 FUN2(VAR6);
 }
}
}
#endif
