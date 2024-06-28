#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(char * VAR5) const
{
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 memcpy(VAR6, VAR5, strlen(VAR6)*sizeof(char));
 VAR6[100-1] = '';
 FUN2(VAR6);
 delete [] VAR5;
 }
}
}
#endif
