from openai import OpenAI
client = OpenAI()
response = client.chat.completions.create(
    messages=[{"role": "user", "content": "In one sentence, what is programming?"}],
    model="gpt-3.5-turbo"
)
print(response.choices[0].message.content)