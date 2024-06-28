int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 VAR1 = 0;
 for( ; VAR1 <= 17; VAR1++)
 {
 /* BAD */
 VAR2[VAR1] = '';
 }
 return 0;
}
