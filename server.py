from flask import Flask, request, jsonify

app = Flask(__name__)

latest_data = {
    "temperature": 0,
    "soil": 0,
    "light": 0
}

@app.route('/update')
def update():
    latest_data["temperature"] = float(request.args.get('temp'))
    latest_data["soil"] = int(request.args.get('soil'))
    latest_data["light"] = int(request.args.get('light'))

    return jsonify({"status": "ok"})

@app.route('/data')
def data():
    return jsonify(latest_data)

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000)