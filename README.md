# Trabalho final

Para utilizar a biblioteca, crie um arquivo `.zip` do diretório `7segment-display`. No Linux, execute:

```bash
tar -zcf 7segment-display.zip 7segment-display
```

Após isso, abra a IDE do Arduino e selecione `Sketch > Include Library > Add .ZIP library` e escolha o arquivo comprimido.

## Códigos de exemplo

### `clear.ino`

Mostra a funcionalidade da função `clear` implementada:

- Ao informar um display, apaga o valor contido nele.

### `hexadecimalCount.ino`

Mostra a funcionalidade das funções `digit` e `get` implementadas:

- Ao informar um display e um valor, o `digit` coloca o valor informado no display;
- Ao informar um display, o `get` retorna o valor do display informado;
