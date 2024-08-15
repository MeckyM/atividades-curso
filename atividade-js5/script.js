function CalculaMedia(){
    //notas recebidas
    let numero1 = Number(prompt("Digite a primeira nota:"));
    let numero2 = Number(prompt("Digite a segunda nota:"));
    let numero3 = Number(prompt("Digite a terceira nota:"));

    //verifica se as entradas são validas
    let mensagem = (isNaN(numero1) || isNaN(numero2) || isNaN(numero3))
        ?"Insira apenas números válidos"
        :`A média aritimética dos números é: ${((numero1 + numero2 + numero3) / 3).toFixed(2)}`;

    //exibe mensagem
    alert(mensagem);
}

CalculaMedia();